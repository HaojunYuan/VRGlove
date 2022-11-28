# VRGlove
 
Team members: Zeman Li, Tianyun Zhao, Haoran Chen, Haojun Yuan.

Gestures can help people communicate better. However, it is difficult to capture finger movements in virtual reality software with the control handles. Our project is a pair of virtual reality gloves controlled by Arduino or mbed. The gloves are integrated with an Arduino mini nano for signal processing. For each finger, a rotary potentiometer is mounted at the root joint of the finger and connected to the fingertip with a set of retractable coils. When the finger is retracted, the user can change the resistance of the potentiometer by retracting the coils. Arduino mini nano will change the gesture of the hand in virtual reality depending on the resistance. hand gestures in virtual reality. This glove needs to be used with a pair of virtual reality headset display and handles.

We combines the VR gloves with the kit we used in the lab this semester for better user experience. Currently, we have the following improvements:

- Use Joystick controller to move the virtual hand around in VR software.
- Add a sonar distance detector to prevent the user from running into obstacles. This is especially useful because the user will be in virtual reality and will not be able to see obstacles in the real world.
- Add LEDs to the glove to warn the user when their hand is too close to an obstacle.
