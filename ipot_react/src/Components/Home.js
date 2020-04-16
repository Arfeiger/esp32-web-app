import React, { Component } from 'react';
import { Card, Button ,AccountDropdown,Avatar,Icon ,Grid ,Alert} from "tabler-react";


class Home extends Component {

    constructor(props) {
        super(props);
        this.state = { 
          date: "",
          getSoilHumidity : "", 
          getLightLevel : "",
          getTemp : "",
          getHumidity : "",
        };
      }
    
    componentDidMount(){
        fetch('http://192.168.0.106/data.json')
        .then((response) => response.text())
          .then((json) => {
              console.log(json) ;
              let data = json.split(";")
              console.log(data[0])
              this.setState( { 
                  date : data[0] ,
                  getSoilHumidity : data[1], 
                  getLightLevel : data[2],
                  getTemp : data[3],
                  getHumidity : data[4],         
              })
          })
      }
    
    render() {
    
        const mystyle ={
            margin: "auto",
            width: "50%",
            padding: "10px",
        };

    return (
    
    <div className ="Home">  

        <Card> 
          <Card.Header>
            <Card.Title>
                <Avatar icon="users" />
            </Card.Title>
            <AccountDropdown
                name="Mechenane Khalef"
                description="Administrator"
                options={[
                "profile",
                { icon: "settings", value: "Settings", to: "/settings" },
                "divider",
                "logout",
                ]}
            />
          </Card.Header>
      </Card>
    
      <div style ={mystyle}>
    
          <Alert type="primary" icon="bell">
              {this.state.date}
          </Alert>
    
          <Grid.Row cards deck>
            <Grid.Col md={6}>
              <Card
                statusColor="green"
                title="Room light level"
                body={this.state.getLightLevel}
                />
            </Grid.Col>
    
            <Grid.Col md={6}>
              <Card
                statusColor="green"
                title="Plant soil humidity"
                body={this.state.getSoilHumidity}
              />
            </Grid.Col>
          </Grid.Row>
    
          <Grid.Row cards deck>
            <Grid.Col md={6}>
              <Card
                statusColor="green"
                title="Room temperature"
                body={this.state.getTemp}
                />
            </Grid.Col>
    
            <Grid.Col md={6}>
              <Card
                statusColor="green"
                title="Room humidity"
                body={this.state.getHumidity}
                />
           </Grid.Col>
          </Grid.Row>
      </div>
    </div>
    );
 }
}
export default Home;