# Topic Controller

## Use
  Stop a model defined in the sdf file (in this case still the test.sdf) when a message gets send to the topic (in this case /reset) which is also defined in the .sdf file

### Plugin integration into existing .sdf file
  To add the Plugin to an existing .sdf file just add this to you .sdf.
  ```xml
  <world name='empty'>
    .
    .
    .
    <plugin name='gz::sim::systems::TopicControl' filename='TopicControl'>
      <model_name>box</model_name>
      <topic_name>reset</topic_name>
    </plugin>
    .
    .
    .
  </world>
  ```
  
  



## Dependencies
  [Just](https://github.com/casey/just)
  [Gazebo Harmonic](https://github.com/gazebosim/gz-sim) 


## Installation
  ```bash
  git clone https://github.com/Linixie/Gazebo_Topic_Controller.git
  cd Gazebo_Topic_Controller/
  just debug 

  ```


