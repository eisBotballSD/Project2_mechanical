#include <kipr/botball.h>

//function prototypes
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
    //servo arm starting position - servo 0
    enable_servos();
    set_servo_position(0,200);
    
    //servo claw starting position - servo 3
    set_servo_position(3,2047);
    msleep(1000);
    
    //****FIRST FIREFIGHTER PICKUP*****
    
    // move forward to firefighter
    distance_sensor();
    
    //pause motor
    pause_motor(1000);
  
    //lower arm
 	lower_arm(1100);
    
    //pause motor
    pause_motor(500);
    
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
    pause_motor(500);
    
    //lower arm
 	lower_arm(1100);
   
   //pause motor
    pause_motor(500);
    
    //open claw
    open_claw();
    
	//pause motor
    pause_motor(500);
    
    //move claw up
    set_servo_position(0,200);
    
   //pause motor
    pause_motor(500);
    
    //move backwards
    back_up(950);
    
    //turn right to get firefighter
    turn_right(340);
    
    //pause motor
    pause_motor(500);
    
    //move forward
    distance_sensor();
    
    //pause motor
    pause_motor(500);
    
     //lower arm
 	lower_arm(1100);
    
    //pause motor
    pause_motor(500);
    
    //close claw
    close_claw();
    
    //pause motor
    pause_motor(500);
    
    //back up
    move_backward_slowly(1300);
    
    //move claw up
    set_servo_position(0,200);
    
    //turn left
    turn_left(325);
    
    //pause motor
    pause_motor(500);
    
    //move forward
    move_forward(920);
    
    //pause motor
    pause_motor(500);
    
    //lower arm
 	lower_arm(850);
    
    //pause motor
    pause_motor(500);
    
    //open claw
    open_claw();
    
     //move backwards
    back_up(950);
    
    //turn right to get firefighter
    turn_right(340);
    
    //pause motor
    pause_motor(500);
    
    //move forward
    distance_sensor();
    
    //pause motor
    pause_motor(500);
    
     //lower arm
 	lower_arm(1100);
    
    //pause motor
    pause_motor(500);
    
    //close claw
    close_claw();
    
    //open claw
    open_claw();
    
    //disable_servos();
    ao();
    return 0;
}



// functions

void distance_sensor() 
{
    while (analog(0) < 2500)
    {
    	//move forward
    	motor(0,84);
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
	motor(0,-84);
    motor(3,-80);
    msleep(mms);
}

void turn_left(int mms)
{
    motor(0,84);
    motor(3,-80);
    msleep(mms);
}

void turn_right(int mms)
{
    motor(0,-84);
    motor(3,80);
    msleep(mms);
}
          
void move_forward(int mms)
{
    motor(0,84);
    motor(3,80);
    msleep(mms);
}

void move_backward_slowly(int mms)
{
    motor(0,-54);
    motor(3,-50);
    msleep(mms);
}