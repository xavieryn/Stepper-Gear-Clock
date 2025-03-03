# Arduino Stepper Motor Gear Clock
Arduino project that has 3 main gears (second hand, minute hand, and hour hand)

The stepper motor (nema 17) directly runs the second hand which is then connected to a gear. I had to use a few compound gears, so that it would be in a more reasonable form factor. 
#### Steps:
* 8t -> 64t (10t compound gear) 
* 10t -> 75t (8t compound gear) (gear ratio: 1:8 * 1:7.5 = 1:60 one rotation of the second hand will rotate the minute hand by 1/60)
* 8t -> 96t (gear ratio: 1:12 (one rotation of the minute hand will move rotate the hour hand by 1/12)

#### Learnings:
* Motor controllers can come broken :(
* Wattage = Voltage * Current (interesting to learn how power supplies actually work)
* Gear ratios & Compound gears
* CAD

#### This video does not actually move at the same timing of a clock as I want to show all the gears rotate. 

[![Video Title](https://img.youtube.com/vi/zskd1j96wYk/0.jpg)](https://www.youtube.com/watch?v=zskd1j96wYk)
