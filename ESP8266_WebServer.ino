#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

// Replace these values with your actual 2.4GHz WiFi Credentials
const char* ssid = "MyWiFiSSID";
const char* password = "MyWiFiPassword";

ESP8266WebServer server(80);  //Creating a server instance on port 80 

void handleRoot() {
  server.send(200, "text/html", "Hello from ESP8266!");
}

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);  // WiFi Connection Initialization 

  while (WiFi.status() != WL_CONNECTED) {
    delay(5000);
    Serial.println("Connecting to WiFi...");
  }

  Serial.println("Connected to WiFi");

  server.on("/", handleRoot);  // Handle the root path ("/") with the handleRoot function
  server.begin();  // Start the server
  Serial.println("Server started. Your ESP8266 Web Server is hosted on: ");
  Serial.print((WiFi.localIP())); // This helps us find out the IP we need to type in our browser to access our web server!
}

void loop() {
  server.handleClient();  // Handle client requests
}
