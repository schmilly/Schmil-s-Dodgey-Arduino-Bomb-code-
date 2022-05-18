int bottom = 2;
int bottom_right = 4;
int bottom_left = 5;
int middle = 3;
int top_left = 8;
int top_right = 6;
int top = 7;

int countdown = 10;
void setup() {
  // put your setup code here, to run once:
 pinMode(bottom , OUTPUT);
 pinMode(bottom_right , OUTPUT);
 pinMode(bottom_left , OUTPUT);
 pinMode(middle , OUTPUT);
 pinMode(top_left , OUTPUT);
 pinMode(top_right , OUTPUT);
 pinMode(top , OUTPUT);
}

  

void loop() {
  if (countdown = 10) {
    digitalWrite( bottom , HIGH);
    digitalWrite( bottom_right , HIGH);
    digitalWrite( bottom_left , HIGH);
    digitalWrite( middle , LOW);
    digitalWrite( top_left , HIGH);
    digitalWrite( top_right , HIGH);
    digitalWrite( top , HIGH);
    delay(1000);
    countdown = 9;
    }
  if (countdown = 9) {
    digitalWrite( bottom , HIGH);
    digitalWrite( bottom_right ,HIGH);
    digitalWrite( bottom_left , LOW);
    digitalWrite( middle , HIGH);
    digitalWrite( top_left , HIGH);
    digitalWrite( top_right , HIGH);
    digitalWrite( top , HIGH);
    delay(1000);
    countdown = 8;
  }
  if (countdown = 8) {
    digitalWrite( bottom , HIGH);
    digitalWrite( bottom_right , HIGH);
    digitalWrite( bottom_left , HIGH);
    digitalWrite( middle , HIGH);
    digitalWrite( top_left , HIGH);
    digitalWrite( top_right , HIGH);
    digitalWrite( top , HIGH);
    delay(1000);
    countdown = 7;
  }
  if (countdown = 7) {
    digitalWrite( bottom , LOW);
    digitalWrite( bottom_right , HIGH);
    digitalWrite( bottom_left , LOW);
    digitalWrite( middle ,LOW);
    digitalWrite( top_left , LOW);
    digitalWrite( top_right , HIGH);
    digitalWrite( top , HIGH);
    delay(1000);
    countdown = 6;
  }
  if (countdown = 6) {
    digitalWrite( bottom , HIGH);
    digitalWrite( bottom_right , HIGH);
    digitalWrite( bottom_left , HIGH);
    digitalWrite( middle , HIGH);
    digitalWrite( top_left , HIGH);
    digitalWrite( top_right , LOW);
    digitalWrite( top , HIGH);
    delay(1000);
    countdown = 5;
  }
  if (countdown = 5) {
    digitalWrite( bottom , HIGH);
    digitalWrite( bottom_right , HIGH);
    digitalWrite( bottom_left , LOW);
    digitalWrite( middle , HIGH);
    digitalWrite( top_left , HIGH);
    digitalWrite( top_right , LOW);
    digitalWrite( top , HIGH);
    delay(1000);
    countdown = 4;
  }
  if (countdown = 4) {
    digitalWrite( bottom , LOW);
    digitalWrite( bottom_right , HIGH);
    digitalWrite( bottom_left , LOW);
    digitalWrite( middle , HIGH);
    digitalWrite( top_left , HIGH);
    digitalWrite( top_right , HIGH);
    digitalWrite( top , LOW);
    delay(1000);
    countdown = 3;
  }
  if (countdown = 3) {
    digitalWrite( bottom , HIGH);
    digitalWrite( bottom_right , HIGH);
    digitalWrite( bottom_left , LOW);
    digitalWrite( middle , HIGH);
    digitalWrite( top_left , LOW);
    digitalWrite( top_right , HIGH);
    digitalWrite( top , HIGH);
    delay(1000);
    countdown = 2;
  }
  if (countdown = 2) {
    digitalWrite( bottom , HIGH);
    digitalWrite( bottom_right , LOW);
    digitalWrite( bottom_left , HIGH);
    digitalWrite( middle , HIGH);
    digitalWrite( top_left ,LOW);
    digitalWrite( top_right , HIGH);
    digitalWrite( top , HIGH);
    delay(1000);
    countdown = 1;
  }
  if (countdown = 1) {
    digitalWrite( bottom , LOW);
    digitalWrite( bottom_right , HIGH);
    digitalWrite( bottom_left , LOW);
    digitalWrite( middle , LOW);
    digitalWrite( top_left , LOW);
    digitalWrite( top_right , HIGH);
    digitalWrite( top , LOW);
    delay(1000);
    countdown = 0.1;
  }     
  while (bottom = 2) {
    digitalWrite( bottom , HIGH);
    digitalWrite( bottom_right , HIGH);
    digitalWrite( bottom_left , HIGH);
    digitalWrite( middle , HIGH);
    digitalWrite( top_left , HIGH);
    digitalWrite( top_right , HIGH);
    digitalWrite( top , HIGH);
    delay(100);
    digitalWrite( bottom , LOW);
    digitalWrite( bottom_right , LOW);
    digitalWrite( bottom_left , LOW);
    digitalWrite( middle , LOW);
    digitalWrite( top_left , LOW);
    digitalWrite( top_right , LOW);
    digitalWrite( top , LOW);
    delay(100);
  }              
} 
