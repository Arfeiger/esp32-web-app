import React , {Component} from 'react';

import { BrowserRouter as Router, Switch ,Route } from 'react-router-dom';
import "tabler-react/dist/Tabler.css";

import Home from "./Components/Home";
import Login from "./Components/Login";
import Error from "./Components/Error";


function App () {

    
  return (

  <Router>
  <div className ="App" > 
  
    <Switch>
       <Route path  = "/" exact component = {Login} />
       <Route path  = "/Error" component = {Error} />
       <Route  path = "/Home"   component = {Home} />
    </Switch>
  </div>
  </Router>
  );
  
}

export default App;
