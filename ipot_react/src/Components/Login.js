
import React, { useState } from 'react';
import {Button ,Form ,Alert } from "tabler-react";


function Login(props) {

  const username = useFormInput('');
  const [loading, setLoading] = useState(false);
  const [ip_address,set_ip] = useState("");
  const [display_state,set_state] = useState("none");
 

  // Reteive the ip adress from esp32
  fetch('http://192.168.0.106/data.json')
        .then((response) => response.text())
          .then((json) => {
              console.log(json) ;
              let data = json.split(";");
             set_ip(data[5]);
            })

  // handle button click of login form
  const handleLogin = () => {
     
    if( username.value.replace(/\s/g, '') === ip_address.replace(/\s/g, '')){
      props.history.push('/Home');
    }
    else {
      set_state("block");
    }
   
   
  }

  let image_path =require('../plant.gif') ;
  const mystyle ={
   height: "100vh",
   margin: "auto",
   padding: "10px",
   backgroundImage :`url(${ image_path })`,
   backgroundSize :"cover",
   
   };

  const divstyle ={
  margin: "auto",
  width: "50%",
  padding: "60px",

   };

  return (
    <div style ={mystyle} >
      <div style ={divstyle}>
      <Form >
        <Form.Input name='username' label='Address IP' {...username} placeholder='http://193.245.678.981' />
            <Button icon="check" color="success"  type='button' value='Submit' onClick={handleLogin} disabled={loading}>Login</Button>
        </Form>
        <br/>
        <div style ={{display : `${display_state}` }}>
        <Alert type="danger" icon="alert-triangle"  >
         The login has failed.
         This due to the wrong IP adress or your Esp32 is not connected !
        </Alert>
        </div>
      </div>
    </div>
  );
}

const useFormInput = initialValue => {
  const [value, setValue] = useState(initialValue);
  const handleChange = e => {
    setValue(e.target.value);
  }
  return {
    value,
    onChange: handleChange
  }
}

export default Login;