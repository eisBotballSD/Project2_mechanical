#include <kipr/botball.h>

void distance_sensor();
void close_claw();
void open_claw();
void lower_arm(int angle);
void pause_motor(int mms);
void back_up(int mms);
void turn_left(int mms);
void turn_right(int mms);
void move_forward(int mms);
void move_backward_slowly(int mms);

int main()
{
    //Trying out a pull request - this didn't work the first time we did this
    // still isn't working - I think we have to merge branches
    // we tried to merge the branches but then it gets rid of the pull request?
    // not sure what we're doing wrong
    //wait_for_light(5);
    shut_down_in(120);
    
    enable_servos();
    
    //servo arm starting position - servo 0
    set_servo_position(0,200);
    
    //set servo to starting position at 1800
    set_servo_position(1,950);
    
    //set servo for shorter claw
    set_servo_position(3, 900);
    
    //right wheel is 0
    
    //pause to let bertha out
    motor(0, 0);
    motor(3, 0);
    msleep(5000);
    
    //set servo to starting position at 1800
    set_servo_position(1,1800);
    
    //pause to let bertha out
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
    //back up to straighten out
    motor(0, -84);
    motor(3, -80);
    msleep(1000);
    
    //move forward out of starting box
    motor(0,84);
    motor(3,80);
    msleep(4200);
    
    //pause
    motor(0,0);
    motor(3,0);
    msleep(100);
    
    //turn right towards power lines
    motor(0, -84);
    motor(3, 80);
    msleep(700);
    
    //stop
    motor(0,84);
    motor(3,0);
    msleep(100);
    
    //forward towards power lines
    motor(0,84);
    motor(3,80);
    msleep(5200);
    
    //turn right
    motor(0,84);
    motor(3,0);
    msleep(100);
    
    //turn right 
    motor(3,80);
    motor(0, -84);
    msleep(720);
  
    //pause
    motor(0,0);
    motor(3,0);
    msleep(100); 
    
    ///turn right
    motor(0,-84);
    motor(3,80);
    msleep(50);
    
    //pause
    motor(0,0);
    motor(3,0);
    msleep(100);
    
    //move backwards against pvc to straighten out
    motor(0, -84);
    motor(3, -80);
    msleep(2500);
    
    //pause
    motor(0,0);
    motor(3,0);
    msleep(100);
    
    //move slightly foward
    motor(0, 84);
    motor(3, 80);
    msleep(500);
    
    //turn left
    
    motor(0, 84);
    motor(3, -80);
    msleep(70);
    
    //pause
    motor(0,0);
    motor(3,0);
    msleep(100);
     
    
    //move forward to power lines
    motor(0, 84);
    motor(3, 80);
    msleep(1900);
    
    //pause
    motor(0,0);
    motor(3,0);
    msleep(100);
     
   //lower arm slowly 
   int counter = 1800;
    while (counter > 1300)
    {
        counter -=50;
        set_servo_position(1,counter);
    	msleep(100);
    }
    
    //pause
    motor(0,0);
    motor(3,0);
    msleep(100);
    
    //go forward
    motor(0, 84);
    motor(3, 80);
    msleep(1800);
   
    //pause
    motor(0,0);
    motor(3,0);
    msleep(100);
    
    //move back a little bit
    motor(0, -84);
    motor(3, -80);
    msleep(1900);
   
    //pause
    motor(0,0);
    motor(3,0);
    msleep(100);
    
    //move servo back up
    
    set_servo_position(1,1800);
   
    //move forward
    motor(0,84);
    motor(3,80);
    msleep(1000);
    
    //stop
    motor(0,0);
    motor(3,0);
    msleep(100);
    
    //turn slightly towards firefighters
    
    motor(0, -83);
    motor(3, 80);
    msleep(100);
    
    //stop
    motor(0,0);
    motor(3,0);
    msleep(100);
    
    //go foward towards time out box
    motor(0, 83);
    motor(3, 80);
    msleep(1200);
    
    //stop
    motor(0,0);
    motor(3,0);
    msleep(100);
    
    //turn towards fire fighters
    motor(0, -83);
    motor(3, 80);
    msleep(130);
    
    //stop
    motor(0, 83);
    motor(3, 80);
    msleep(100);
    
    //goes a little foward
    motor(0,83);
    motor(3,80);
    msleep(1000);
    
    //stop
     motor(0,0);
    motor(3,0);
    msleep(100);
    
    //turn more towards firefighters
    motor(0, -83);
    motor(3, 80);
    msleep(600);
    
    //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
    //move towards black line from starting box
    motor(0, 83);
    motor(3, 80);
    msleep(3300);
    
    //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
    //straighten out
    motor(0, 83);
    motor(3, -80);
    msleep(150);
    
    //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
    //foward to fire fighters
    motor(0, 83);
    motor(3, 80);
    msleep(6000);
    
    //stop
   	motor(0, 0);
    motor(3, 0);
    msleep(100);
    
    //turn to pvc pipe to straighten out
    motor(0, -83);
    motor(3, 80);
    msleep(500);
    
    //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
    //backwards into pvc pipe to straighten out
    motor(0, -83);
    motor(3, -80);
    msleep(3000);
    
     //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
    //forward out of pvc pipe
    motor(0,83);
    motor(3,80);
    msleep(3000);
    
     //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
    //turn left
    motor(0, 83);
    motor(3, -80);
    msleep(800);
    
     //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
        
    //move foward to building
   	 motor(0,83);
    motor(3,80);
    msleep(4100);
    
    //pause motor
    pause_motor(100);
    
    //turn to water cube
    motor(0, 83);
    motor(3, -80);
    msleep(745);
    
    //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
     //open claw
    open_claw();
    
    //lower arm
 	lower_arm(1100);
    
   //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
    //move foward
    motor(0, 83);
    motor(3, 80);
    msleep(2100);
    
     //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
      //close claw
    set_servo_position(3, 1400);
    
     //stop
    motor(0, 0);
    motor(3, 0);
    msleep(300);
    
    //back up
    motor(0, -83);
    motor(3, -80);
    msleep(1000);
    
    //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
    //turn slightly
    motor(0, -83);
    motor(3, 80);
    msleep(200);
    
    //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
    //back up a little
    motor(0, -83);
    motor(3, -80);
    msleep(1700);
    
    //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
     //claw up
    set_servo_position(0, 200);
    
    //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
    //turn
    motor(0, -83);
    motor(3, 80);
    msleep(500);
    
    //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
    //back up a little to drop water cube
    motor(0, -83);
    motor(3, -80);
    msleep(1000);
    
    //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
    //lower claw
    lower_arm(1100);
    
    //open claw
    open_claw();
    
    //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
    //claw up
    set_servo_position(0, 200);
    
    //back up
    motor(0, -83);
    motor(3, -80);
    msleep(2000);
   
    //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
   
    //close claw
    close_claw();
    
    //turn to pvc pipe
    motor(0, -83);
    motor(3, 80);
    msleep(850);
    
    //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
    //back up against pvc pipe
    motor(0, -83);
    motor(3, -80);
    msleep(5000);
    
   //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
    
    
      
    //go foward a little
    motor(0, 83);
    motor(3, 80);
    msleep(1300);
    
    //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
   
    //turn towards fire fighters
    motor(0, 83);
    motor(3, -80);
    msleep(770);
    
    //stop
    motor(0, 0);
    motor(3, 0);
    msleep(100);
        
       //servo arm starting position - servo 0
    enable_servos();
    set_servo_position(0,200);
    
    //servo claw starting position - servo 3
    set_servo_position(3,2047);
    msleep(1000);
    
   //FIRST FIREFIGHTER PICKUP
    
    // move forward to firefighter
    distance_sensor();
    
    //pause motor
    pause_motor(1000);
  
    //lower arm
 	lower_arm(1100);
    
    //pause motor
    pause_motor(100);
    
    //close claw
    close_claw();
  
     //back up
    move_backward_slowly(1300);
    
    //lifting arm back up
    set_servo_position(0,200);
    
    //turn left
    turn_left(300);
    
    //move forward
    move_forward(1100);
    
     //pause motor
    pause_motor(100);
    
    //lower arm
 	lower_arm(1100);
   
   //pause motor
    pause_motor(100);
    
    //open claw
    open_claw();
    
	//pause motor
    pause_motor(100);
    
    //move claw up
    set_servo_position(0,200);
    
   //pause motor
    pause_motor(100);
    
    //move backwards
    back_up(950);
    
     //SECOND FIREFIGHTER PICKUP
    
    //turn right to get firefighter
    turn_right(340);
    
    //pause motor
    pause_motor(100);
    
    //move forward
    distance_sensor();
    
    //pause motor
    pause_motor(100);
    
     //lower arm
 	lower_arm(1100);
    
    //pause motor
    pause_motor(100);
    
    //close claw
    close_claw();
    
    //pause motor
    pause_motor(100);
    
    //back up
    move_backward_slowly(1300);
    
    //move claw up
    set_servo_position(0,200);
    
    //turn left
    turn_left(300);
    
    //pause motor
    pause_motor(100);
    
    //move forward
    move_forward(970);
    
    //pause motor
    pause_motor(100);
    
    //lower arm
 	lower_arm(850);
    
    //pause motor
    pause_motor(100);
    
    //open claw
    open_claw();
    
     //move backwards
    back_up(950);  
    
    //*********THIRD FIREFIGHTER PICKUP**************//
    
    //turn right to get firefighter
    turn_right(340);
    
    //pause motor
    pause_motor(100);
    
    //lift claw
    set_servo_position(0,200);
    
    //pause motor
    pause_motor(100);
    
    //move forward
    distance_sensor();
    
    //pause motor
    pause_motor(100);
    
     //lower arm
 	lower_arm(1100);
    
    //pause motor
    pause_motor(100);
    
    //close claw
    close_claw();
    
    //pause motor
    pause_motor(100);
    
    //back up
    move_backward_slowly(1300);
    
    //move claw up
    set_servo_position(0,200);    
    
    //turn left
    turn_left(300);
    
    //pause motor
    pause_motor(100);
    
    //move forward
    move_forward(950);
    
    //pause motor
    pause_motor(100);
    
    //lower arm
 	lower_arm(850);
    
    //pause motor
    pause_motor(100);
    
    //open claw
    open_claw();
    
     //move backwards
    back_up(950);
    
    
    
    
     //END
     ao();
    return 0;
    
    
}
// functions

void distance_sensor() 
{
    while (analog(0) < 2500)
    {
    	//move forward
    	motor(0,83);
        motor(3,80);
    }
}

void close_claw()
{
    int counter = 2047;
    while(counter > 1079)
    {
        counter -= 100;
        set_servo_position(3,counter);
        msleep(100);
    } 
}

void open_claw()
{    
    int counter = 1079;
    while(counter < 2047)
    {
        counter += 70;
        set_servo_position(3,counter);
        msleep(100);
    }  
}

void lower_arm(int angle)
{
    int counter = 200;
    while(counter < angle)
    {
        counter += 70;
        set_servo_position(0,counter);
        msleep(100);
    } 
}

void pause_motor(int mms)
{
    motor(0,0);
    motor(3,0);
    msleep(mms);
}

void back_up(int mms)
{
	motor(0,-83);
    motor(3,-80);
    msleep(mms);
}

void turn_left(int mms)
{
    motor(0,83);
    motor(3,-80);
    msleep(mms);
}

void turn_right(int mms)
{
    motor(0,-83);
    motor(3,80);
    msleep(mms);
}
          
void move_forward(int mms)
{
    motor(0,83);
    motor(3,80);
    msleep(mms);
}

void move_backward_slowly(int mms)
{
    motor(0,-53);
    motor(3,-50);
    msleep(mms);
}
