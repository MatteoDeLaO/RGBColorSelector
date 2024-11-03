void setup() {
    // Set RGB LED pins as outputs
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    
    // Set RGB to show pink
    analogWrite(9, 255);  // Full red
    analogWrite(10, 0);   // No green
    analogWrite(11, 127);  // Half blue for pink
}
void loop() {
    // The loop can be empty since we want a constant color
}
