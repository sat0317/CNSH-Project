PVector location;  // Location of shape
PVector velocity;  // Velocity of shape
PVector gravity;   // Gravity acts at the shape's acceleration

void setup() {
  size(640,360);
  location = new PVector(150,330);
  velocity = new PVector(5,20);
  gravity = new PVector(0,0.2);

}

void draw() {
  background(0);
  location.add(velocity);
  velocity.add(gravity);
  
  if ((location.x > width-20) || (location.x < 20)) {
    velocity.x = velocity.x * -1;
  }
  if (location.y > height-20) {
    velocity.y = velocity.y * -0.7; 
    velocity.x = velocity.x * 0.8;
    location.y = height-20;
  }

  stroke(255);
  strokeWeight(2);
  fill(127);
  ellipse(location.x,location.y,40,40);
}
