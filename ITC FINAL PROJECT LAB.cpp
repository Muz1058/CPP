#include <iostream>
using namespace std;
int main()
{

	int id, password, rnum;
	int  room1[10] = { 0,0,0,0,1,0,1,0,0,0 };
	int room2[10] = { 0,0,0,0,1,0,1,0,1,0 };
	int room3[10] = { 0,1,0,0,1,0,1,0,0,0 };
	char floor, booking;
	cout << "************************************************" << endl;
	cout << "*******WELCOME TO HOTEL MANAGEMENT SYSTEM*******" << endl;
	cout << "************************************************" << endl;
	do
	{
		cout << "Enter your ID :";
		cin >> id;
		cout << "Enter your password :";
		cin >> password;
		if (id == 844 && password == 222 || id == 930 && password == 333)
		{
			cout << "Login successfully with employee id (" << id << ")" << endl << endl;
			cout << "          WELCOME          " << endl << endl;
			break;
		}
		else
		{
			cout << "Invallid ID or Password :" << endl;

		}
	} while (id != 844 && password != 222 || id == 844 && password != 222 || id != 930 && password != 333 || id == 930 && password != 333);

	cout << "      Press F to book room on first floor " << endl;
	cout << "      Press S to book room on second floor " << endl;
	cout << "      Press T to book room on third floor " << endl << endl;

	do
	{
		cout << "Enter floor :";
		cin >> floor;
		if (floor == 'f' || floor == 'F')
		{
			cout << "Welcome to first floor" << endl << endl;

			do
			{
				int countF = 0;
				cout << "Information of rooms on FIRST FLOOR " << endl;
				cout << " Rooms avaiable on first floor :";
				for (int i = 0; i < 10; i++)
				{
					if (room1[i] == 0)
					{
						cout << i + 1 << " ";
						countF++;
					}
				}
				cout << endl;
				cout << "Total available Room :" << countF << endl;

				for (int i = 0; i < 10; i++)
				{
					if (room1[i] == 1)
						cout << "Room " << i + 1 << " is booked on first floor" << endl;
				}
				cout << endl;
				cout << "Press B to book the room    or" << endl;
				cout << "Press E to exit" << endl;
				cin >> booking;
				if (countF == 0)
				{
					cout << "sorry no ROOM available for booking on FIRST Floor " << endl;
					cout << "Thank you for visiting hotel managment system " << endl;
					break;
				}
				if (booking == 'B' || booking == 'b')
				{
					cout << "Enter room number to book :";
					cin >> rnum;
					if (rnum > 0 && rnum <= 10)
					{
						if (room1[rnum - 1] == 0)
						{
							room1[rnum - 1] = 1;
							cout << "Room " << rnum << " successfully booked" << endl << endl;
						}
						else
						{
							cout << "Room is already booked" << endl;
							cout << "Try again " << endl;
						}
					}
					else
						cout << "Invalid room number " << endl;
				}
				else
				{
					cout << "Thank you for visiting hotel managment system " << endl;

				}
			} while (booking == 'B' || booking == 'b');
			break;
		}
		else if (floor == 's' || floor == 'S')
		{
			cout << "Welcome to second floor" << endl;

			do
			{
				int countS = 0;
				cout << "Information of rooms on SECOND FLOOR " << endl;
				cout << "Rooms avaiable on SECOND floor :";
				for (int i = 0; i < 10; i++)
				{
					if (room2[i] == 0)
					{
						cout << i + 1 << " ";
						countS++;
					}
				}
				cout << endl;
				cout << "Total available Rooms : " << countS << endl;
				for (int i = 0; i < 10; i++)
				{
					if (room1[i] == 1)
						cout << "Room " << i + 1 << " is booked on SECOND floor" << endl;
				}
				cout << endl;
				cout << "Press B to book the room    or" << endl;
				cout << "Press E to exit" << endl;
				cin >> booking;
				if (countS == 0)
				{
					cout << "sorry no ROOM available for booking on FIRST Floor " << endl;
					cout << "Thank you for visiting hotel managment system " << endl;
					break;
				}
				if (booking == 'B' || booking == 'b')
				{
					cout << "Enter room number to book :";
					cin >> rnum;
					if (rnum > 0 && rnum <= 10)
					{
						if (room2[rnum - 1] == 0)
						{
							room2[rnum - 1] = 1;
							cout << "Room " << rnum << " successfully booked" << endl << endl;
						}
						else
						{
							cout << "Room is already booked" << endl;
							cout << "Try again " << endl;
						}
					}
					else
						cout << "Invalid room number " << endl;
				}
				else
				{
					cout << "Thank you for visiting hotel managment system " << endl;

				}
			} while (booking == 'B' || booking == 'b');
			break;

		}
		else if (floor == 't' || floor == 'T')
		{
			cout << "Welcome to third floor" << endl;

			do
			{
				int countT = 0;
				cout << "Information of rooms on THIRD FLOOR " << endl;
				cout << "Rooms avaiable on THIRD floor :";
				for (int i = 0; i < 10; i++)
				{
					if (room3[i] == 0)
					{
						cout << i + 1 << " ";
						countT++;
					}
				}
				cout << endl;
				cout << "Total available Rooms : " << countT << endl;
				for (int i = 0; i < 10; i++)
				{
					if (room1[i] == 1)
						cout << "Room " << i + 1 << " is booked on THIRD Floor" << endl;
				}
				cout << endl;
				cout << "Press B to book the room    or" << endl;
				cout << "Press E to exit" << endl;
				cin >> booking;
				if (countT == 0)
				{
					cout << "sorry no ROOM available for booking on FIRST Floor " << endl;
					cout << "Thank you for visiting hotel managment system " << endl;
					break;
				}
				if (booking == 'B' || booking == 'b')
				{
					cout << "Enter room number to book :";
					cin >> rnum;
					if (rnum > 0 && rnum <= 10)
					{
						if (room3[rnum - 1] == 0)
						{
							room3[rnum - 1] = 1;
							cout << "Room " << rnum << " successfully booked" << endl << endl;
						}
						else
						{
							cout << "Room is already booked" << endl;
							cout << "Try again " << endl;
						}
					}
					else
						cout << "Invalid room number " << endl;
				}
				else
				{
					cout << "Thank you for visiting hotel managment system " << endl;

				}
			} while (booking == 'B' || booking == 'b');
			break;
		}
		else
		{
			cout << "Invalid input " << endl;
			cout << "Try again" << endl;
		}
	} while (floor != 'F' || floor != 'f' || floor != 'S' || floor != 's' || floor != 'T' || floor != 't');
	return 0;
}

