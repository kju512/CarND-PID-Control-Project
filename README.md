# CarND-Controls-PID
This is a Self-Driving Car Engineer Nanodegree Program completed by Michael chen.This program implements a PID controllor for controling a vehichle.

## Build and Run
1. clone this repository to your local machine.
2. implement below order step by step.  
>  mkdir build && cd build  
>  cmake .. && make  
> ./pid`.   
3. open the Term 2 Simulator which can be downloaded [here](https://github.com/udacity/self-driving-car-sim/releases).and Select "the Project 4:PID controllor".

## Reflection
Kp is the coefficient of P term of PID algorithm.It is the main component of PID algorithm.The effect of the P component of the PID algorithm is that it can impact the output by the proportional term to the CTE.If the Cross track error is big,then the proportional term will be big too.And it has a big huge impact on the control.If the Kp is too small,the vehicle will turn very slowly.If the Kp is too large,the vehicle will turn very sensitively,and will easily be overshoot.    
kd is the coefficient of differential term of PID algorithm.It can avoid an overshoot by the P term.   
Ki is the coefficient of integral term of PID algorithm.If there is a bias.then the integral part can play an key role.In our task(lake race track),the robot has no bias,the Ki is set to be 0.

## Final hyperparameters
I tune the hpyerparameter manually.When Kp is 0.2,kd is set to be 5.0,and ki is set to be 0.0,it can reach a good performance.  


## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets) == 0.13, but the master branch will probably work just fine
  * Follow the instructions in the [uWebSockets README](https://github.com/uWebSockets/uWebSockets/blob/master/README.md) to get setup for your platform. You can download the zip of the appropriate version from the [releases page](https://github.com/uWebSockets/uWebSockets/releases). Here's a link to the [v0.13 zip](https://github.com/uWebSockets/uWebSockets/archive/v0.13.0.zip).
  * If you run OSX and have homebrew installed you can just run the ./install-mac.sh script to install this
* Simulator. You can download these from the [project intro page](https://github.com/udacity/CarND-PID-Control-Project/releases) in the classroom.
