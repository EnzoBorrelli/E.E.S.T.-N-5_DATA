class Led {
  private:
    int intensidad = 0;
    bool estado = 0;
    int led;
  public:
    Led(int pin_led) {
      led = pin_led;
      pinMode(led, OUTPUT);
    }

    void Prender_Led() {
      analogWrite(led, intensidad);
      estado = true;
    }

    void Apagar_Led() {
      digitalWrite(led, LOW);
      estado = false;
    }
    void Set_intensidad(int i) {
      intensidad = i;
    }
    int Get_intensidad() {
      return intensidad;
    }
    bool Get_estado() {
      return estado;
    }

};

Led *led = new Led(LED_BUILTIN);

void setup() {
  led->Set_intensidad(255);

}

void loop() {
  
  led->Prender_Led();
  delay(1000);
  led->Apagar_Led();

}
