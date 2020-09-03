# 3D printed peristaltic pump

I made a very simple peristaltic pump, to be printed as fast as possible and with a few parts to do some tests with glycerine. It is attachable to a NEMA 17 stepper motors as it is part of a larger project where it must control dispensed volume.

# Design

A peristaltic pump is a good option when the fluid to pump is viscous, it is also very simple and clean, as the fluid is contained in a hose. The hose is pressed to push the fluid in one direction or the other with a circular motion. To eliminate friction that will try to displace the hose is that bearings are used to press, reducing the tangential force.

<img src="/images/peris.png" width="500">

This pump has to be attached to a NEMA 17, so the case dimensiones where restricted to a similar size, also a 5 mm axis with a D cut. With a gear box the system will work more smoothly, but it will complicate the things a little bit, so maybe i will do that in another version.

<img src="/images/case.png" width="750">

I used the smallest bearings that i had, 3x10x4, in a triangular arrangement for the impeller, the bearing are press fit in the impeller, and the impeller is press fit in the shaft until the end of the D cut. The bearings should roll only on the hose and not in any other surface, because it will ad friciton.

<img src="/images/impeller.png" width="750">

The lid is to prevent dust, broken fingers (naah) and to keep the hose in place if it tries to come out.

<img src="/images/cadesign.png" width="750">

As everything is small, so it is the hose (4 mm outside diameter), this will make the volume delivery more accurate, which is one of the goals of this project.

# Parts and materiales

Item                     | Quantity
 ---------------------------   | ------------
Case | 1
Impeller | 1
Lid | 1
Bearing 623zz | 3
Bolt M3x20 | 4
M5 Washer | 1
NEMA 17 | 1

And a 4 mm soft hose, i think that i got mine from a medical drop counter.

There are two version of the case, one with a mounting base holes and the other one smaller without this.

# Manufacture

## 3D printing

I printed the parts with PLA, 0.3 mm layer height and without supports nor raft. I think that the orientation is pretty obvious: by the flat side.

## Assembly

- Put the case on top of the stepper, the inner circle shoul fit tightly on the stepper. 

- Push the bearings into the pins of the impeller, until the end of it.

- Press the impeller against the stepper shaft with the bearings facing down until the end of the D cut.

- Pass the hose through one of the holes in the case and pull it gently with pliers until it comes out through the other hole. Turn the impeller with your hand to make way. Do not allow that the hose comes up.

- Close the pump with the lid and bolts.


# Tests

## Electronics

A good option to control a stepper motor is to use a driver, and a better one if you are using an Arduino is using a shield with ports for a driver and write a simple code.

I did not have any of this but a 3D printer with similar motors, so i plugged the pump to the X axis and used the printer interface to actuate the pump.

## Moving glycerin

yes

# Further work

- To get open loop volume control using an Arduino.
- To make a bigger version for a a bigger hose.

