# Traffic-Light-System
This is traffic light system in Arduino Using RGB light with Pedestrian Crossing Capability.
# Traffic Light System

This C++ code implements a basic traffic light system with pedestrian crossing support. The system uses input signals from sensors to control the traffic lights and pedestrian signal.
![image](https://github.com/RoggersAnguzu/Traffic-Light-System/assets/141458053/bfde41cc-b304-446f-8225-ed18e74693ba)

## Hardware Setup

To set up the hardware, connect the following components to your microcontroller (e.g., Arduino):

- Pin 2: Input for left traffic light sensor.
- Pin 3: Input for right traffic light sensor.
- Pin 4: Input for pedestrian sensor.
- Pin 5: Output for the red traffic light.
- Pin 6: Output for the yellow traffic light.
- Pin 7: Output for the green traffic light.
- Pin 11: Analog output for the piezo (buzzer) for pedestrian signal.

Ensure that the connections are correctly wired before running the code.

## Code Logic

The code uses the input signals from the left sensor, right sensor, and pedestrian sensor to control the traffic lights and pedestrian signal.

### Left Traffic Light
- If the left sensor is triggered and the pedestrian sensor is not, the left traffic light turns green.
- If the left sensor is not triggered and the pedestrian sensor is not, the left traffic light turns green.
- If the left sensor is not triggered and the pedestrian sensor is triggered, the left traffic light turns red and the pedestrian signal (buzzer) activates.
- If both sensors are triggered, the left traffic light turns red and the pedestrian signal activates.

### Right Traffic Light
- Similar logic applies to the right traffic light based on the right sensor and pedestrian sensor.

## Usage

1. Upload the code to your microcontroller.
2. Ensure that the hardware connections are correct.
3. Observe the behavior of the traffic lights and pedestrian signal based on sensor inputs.

## Note

This is a simplified traffic light system and serves as a basic example. In real-world applications, traffic light systems are more complex and often controlled by a central traffic management system.

For additional features and improvements, you can extend the code to include more sensors, advanced timing logic, and synchronization between traffic lights.

Please refer to the comments within the code for specific details and explanations.


