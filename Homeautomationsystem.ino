int lamp1 = 2;
int lamp2 = 3;
int lamp3 = 4;
int music = 5;
int pc = 6;
int mobile = 7;
int fan = 8;
int socket = 9;
int Received = '0';
int lamp1_state = 0;
int lamp2_state = 0;
int lamp3_state = 0;
int music_state = 0;
int pc_state = 0;
int mobile_state = 0;
int fan_state = 0;
int socket_state = 0;

void setup() {
  Serial.begin(9600);

  pinMode(lamp1, OUTPUT);

  pinMode(lamp2, OUTPUT);

  pinMode(lamp3, OUTPUT);

  pinMode(music, OUTPUT);

  pinMode(pc, OUTPUT);
  pinMode(mobile, OUTPUT);

  pinMode(fan, OUTPUT);

  pinMode(socket, OUTPUT);
}
void loop() {

  if (Serial.available() > 0)

  {

    Received = Serial.read();

  }

  if (lamp1_state == 0 && Received == 1)

  {

    digitalWrite(lamp1, HIGH);

    lamp1_state = 1;

    Received = 0;

  }

  if (lamp1_state == 1 && Received == 1)

  {

    digitalWrite(lamp1, LOW);

    lamp1_state = 0;

    Received = 0;

  }

  if (lamp2_state == 0 && Received == 2)

  {

    digitalWrite(lamp2, HIGH);
    lamp2_state = 1;

    Received = 0;

  }

  if (lamp2_state == 1 && Received == 2)

  {

    digitalWrite(lamp2, LOW);

    lamp2_state = 0;

    Received = 0;

  }

  if (lamp3_state == 0 && Received == 3)

  {

    digitalWrite(lamp3, HIGH);

    lamp3_state = 1;

    Received = 0;

  }

  if (lamp3_state == 1 && Received == 3)

  {

    digitalWrite(lamp3, LOW);

    lamp3_state = 0;

    Received = 0;

  }

  if (music_state == 0 && Received == 4)

  {

    digitalWrite(music, HIGH);

    music_state = 1;

    Received = 0;

  }

  if (music_state == 1 && Received == 4)

  {
    digitalWrite(music, LOW);

    music_state = 0;

    Received = 0;

  }

  if (pc_state == 0 && Received == 5)

  {

    digitalWrite(pc, HIGH);

    pc_state = 1;

    Received = 0;

  }

  if (pc_state == 1 && Received == 5)
  {
    digitalWrite(pc, LOW);
    pc_state = 0;
    Received = 0;
  }
  if (mobile_state == 0 && Received == 6)
  {
    digitalWrite(mobile, HIGH);
    mobile_state = 1;
    Received = 0;
  }
  if (mobile_state == 1 && Received == 6)
  {
    digitalWrite(mobile, LOW);
    mobile_state = 0;
    Received = 0;
  }
  if (fan_state == 0 && Received == 7)
  {
    digitalWrite(fan, HIGH);
    fan_state = 1;
    Received = 0;
  }
  if (fan_state == 1 && Received == 7)
  {
    digitalWrite(fan, LOW);
    fan_state = 0;
    Received = 0;
  }
  if (socket_state == 0 && Received == 8)
  {
    digitalWrite(socket, HIGH);
    socket_state = 1;
    Received = 0;
  }
  if (socket_state == 1 && Received == 8)
  {
    digitalWrite(socket, LOW);
    socket_state = 0;
    Received = 0;
  }
}