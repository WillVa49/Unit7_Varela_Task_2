#include "appDate.h"
#include "timeOfDay.h"
#include "event.h"

using namespace std;

void createEvent(timeOfDay t, appDate a, event e)
{
  short h = 0, m = 0, s = 0, mo = 0, d = 0;
  int y = 0, decision = 0;
  string urgent = "";
  string eName = "";

  //Populate timeOfDay
  cout << "Enter Hour: ";
  cin >> h;
  t.hour = h;

  cout << "Enter Minutes: ";
  cin >> m;
  t.minute = m;

  cout << "Enter Seconds: ";
  cin >> s;
  t.second = s;

  //populate appDate
  cout << "Enter Month: ";
  cin >> mo;
  a.month = mo;

  cout << "Enter Day: ";
  cin >> d;
  a.dayOfMonth = d;

  cout << "Enter Year: ";
  cin >> y;
  a.year = y;

  //Set Event Details
  //Get Event Information
  cout << "Enter Event Name: ";
  cin >> eName;
  e.eventName = eName;

  cout << "Is the event urgent? (1 = yes, 2 = no): ";
  cin >> decision;
  if (decision == 1)
  {
    e.isUrgent = true;
    urgent = "yes";
  }
  else if (decision == 2)
  {
    e.isUrgent = false;
    urgent = "no";
  }
  else 
  {
    cout << "Invalid Input";
  }
  //Put dMain in Event eMain
  e.eventDate = a;

  //Put tMain in Event eMain
  e.eventTime = t;

  //Print the Event
  cout << "\nEvent DETAILS: " << endl;
  cout << "Event name: " + e.eventName << endl;
  cout << "\nIs urgent: " << urgent << endl;
  cout << e.toString(); //Print the date and time calling toString() override
}

int main() 
{
  //Declare the instances of the STRUCT we need
  event eMain;
  //Create a timeOfDay to share with eMain
  timeOfDay tMain;
  //Create a day of month to share with eMain
  appDate dMain;

  createEvent(tMain, dMain, eMain); //Populate and print new event
  
  return 0;
}