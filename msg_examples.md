# gz-msgs10 CLI Examples

## Basic Scalar Messages

### Boolean
```bash
gz topic -t /enable_motor -m gz.msgs.Boolean -p 'data: true'
```

### Double
```bash
gz topic -t /cmd_vel_z -m gz.msgs.Double -p 'data: -1.5'
```

### Float
```bash
gz topic -t /temperature -m gz.msgs.Float -p 'data: 23.7'
```

### Int32
```bash
gz topic -t /counter -m gz.msgs.Int32 -p 'data: 42'
```

### UInt32
```bash
gz topic -t /mode -m gz.msgs.UInt32 -p 'data: 3'
```

### StringMsg
```bash
gz topic -t /robot_name -m gz.msgs.StringMsg -p 'data: "rover1"'
```

---

# Geometry Messages

## Vector3d
```bash
gz topic -t /force -m gz.msgs.Vector3d -p '
x: 1.0
y: 2.0
z: 3.0'
```

### Vector3d (single-line)
```bash
gz topic -t /force -m gz.msgs.Vector3d -p 'x: 1.0 y: 2.0 z: 3.0'
```

---

## Quaternion
```bash
gz topic -t /orientation -m gz.msgs.Quaternion -p '
x: 0
y: 0
z: 0
w: 1'
```

---

## Pose
```bash
gz topic -t /pose -m gz.msgs.Pose -p '
position {
  x: 1.0
  y: 2.0
  z: 0.5
}
orientation {
  x: 0
  y: 0
  z: 0
  w: 1
}'
```

---

## Twist
```bash
gz topic -t /cmd_vel -m gz.msgs.Twist -p '
linear {
  x: 1.0
  y: 0.0
  z: 0.0
}
angular {
  x: 0.0
  y: 0.0
  z: 0.5
}'
```

### Twist (compact)
```bash
gz topic -t /cmd_vel -m gz.msgs.Twist -p 'linear { x: 1.0 } angular { z: 0.5 }'
```

---

## Wrench
```bash
gz topic -t /wrench -m gz.msgs.Wrench -p '
force {
  x: 10
  y: 0
  z: 0
}
torque {
  x: 0
  y: 0
  z: 2
}'
```

---

# Sensor Messages

## IMU
```bash
gz topic -t /imu -m gz.msgs.IMU -p '
orientation {
  w: 1
}
angular_velocity {
  z: 0.1
}
linear_acceleration {
  x: 9.81
}'
```

---

## NavSat
```bash
gz topic -t /gps -m gz.msgs.NavSat -p '
latitude_deg: 50.55
longitude_deg: 9.68
altitude: 250.0'
```

---

## LaserScan
```bash
gz topic -t /scan -m gz.msgs.LaserScan -p '
angle_min: -1.57
angle_max: 1.57
angle_step: 0.01
range_min: 0.1
range_max: 10.0
ranges: 1.2
ranges: 1.3
ranges: 1.4'
```

---

# Simulation Messages

## Clock
```bash
gz topic -t /clock -m gz.msgs.Clock -p '
sim {
  sec: 123
  nsec: 456000000
}'
```

---

## Entity
```bash
gz topic -t /entity -m gz.msgs.Entity -p '
id: 1
name: "robot1"
type: MODEL'
```

---

# Joint / Actuator Messages

## Actuators
```bash
gz topic -t /actuators -m gz.msgs.Actuators -p '
velocity: 1.0
velocity: 1.2
velocity: 1.1'
```

---

## JointCmd
```bash
gz topic -t /joint_cmd -m gz.msgs.JointCmd -p '
name: "wheel_joint"
position {
  target: 1.57
}'
```

---

# Visualization Messages

## Marker
```bash
gz topic -t /marker -m gz.msgs.Marker -p '
ns: "debug"
id: 1
action: ADD_MODIFY
type: SPHERE
pose {
  position {
    x: 1
    y: 2
    z: 0
  }
}
scale {
  x: 0.5
  y: 0.5
  z: 0.5
}'
```

---

# Useful CLI Commands

## Publish once
```bash
gz topic -t /cmd_vel -m gz.msgs.Twist -p 'linear { x: 1.0 }' --once
```

---

## Publish repeatedly at 10 Hz
```bash
gz topic -t /cmd_vel -m gz.msgs.Twist -p 'linear { x: 1.0 }' -r 10
```

---

## Inspect topic type
```bash
gz topic -i -t /cmd_vel
```

---

## Echo topic
```bash
gz topic -e -t /cmd_vel
```

---

# Real-World Examples

## Differential drive robot
```bash
gz topic -t /cmd_vel -m gz.msgs.Twist -p '
linear { x: 0.5 }
angular { z: 0.2 }'
```

---

## Stop robot
```bash
gz topic -t /cmd_vel -m gz.msgs.Twist -p '
linear { x: 0.0 }
angular { z: 0.0 }'
```

---

## Apply force
```bash
gz topic -t /force -m gz.msgs.Vector3d -p '
x: 100
y: 0
z: 0'
```

---

## Set model pose
```bash
gz topic -t /model/my_robot/pose -m gz.msgs.Pose -p '
position { x: 1 y: 2 z: 0 }
orientation { w: 1 }'
```
