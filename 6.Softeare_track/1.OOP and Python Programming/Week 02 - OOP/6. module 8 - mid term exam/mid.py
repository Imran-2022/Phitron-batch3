class Star_Cinema:
    _hall_list = []

    def entry_hall(self, hall):
        self._hall_list.append(hall)

class Hall(Star_Cinema):
    def __init__(self, hall_no, rows, cols):
        self._seats = {}
        self._show_list = []
        self._rows = rows
        self._cols = cols
        self._hall_no = hall_no
        super().entry_hall(self)

    def entry_show(self, show_id, movie_name, time):
        show_info = (show_id, movie_name, time)
        self._show_list.append(show_info)
        self._seats[show_id] = [[0 for _ in range(self._cols)] for _ in range(self._rows)]

    def book_seats(self, show_id, seat_list):
        if show_id not in self._seats:
            print("Invalid show ID.")
            return

        for seat in seat_list:
            print('\n')
            row, col = seat
            if not (0 <= row < self._rows and 0 <= col < self._cols):
                print(f"Invalid seat: Row {row}, Col {col}")
                continue

            if self._seats[show_id][row][col] == 1:
                print(f"Seat at Row {row}, Col {col} is already booked.")
            else:
                self._seats[show_id][row][col] = 1
                print(f"Seat booked : Row {row}, Col {col}")
            print('\n')
            

    def view_show_list(self):
        print('\n')
        print("Show List:")
        print('\n')
        
        for show_id, movie_name, time in self._show_list:
            print(f"Show ID: {show_id}, Movie: {movie_name}, Time: {time}")
        print('\n')

    def view_available_seats(self, show_id):
        print('\n')

        if(show_id not in self._seats):
            print("Invalid show_id.")
            print('\n')
            return
        
        print(f"Seats Matrix for Hall_no : {self._hall_no} && show id : {show_id} : ")
        print('\n')

        for _ in self._seats[show_id]:
            print(list(_))
        print('\n')


def fn():

    hall1 = Hall(1, 7, 7)
    hall1.entry_show(show_id=1, movie_name="movie 01", time="25/10/2024 11.00AM")
    hall1.entry_show(show_id=2, movie_name="movie 02", time="26/10/2024 12.00AM")

    while True:

        print("1. View all shows today")
        print("2. View available seats")
        print("3. Book tickets")
        print("4. Exit")


        try:
            choice = int(input("Enter Option: "))
            if choice == 4:
                break

            elif choice == 1:
                hall1.view_show_list()

            elif choice == 2:
                show_id = int(input("Enter Show ID: "))
                hall1.view_available_seats(show_id)

            elif choice == 3:
                show_id = int(input("Enter Show ID: "))
                num_tickets = int(input("Enter Number of Tickets: "))
                seat_list = []
                i=1

                for _ in range(num_tickets):
                    row, col = map(int, input(f"{i}. Enter Row and Column: ").split())
                    seat_list.append((row, col))
                    i=i+1

                hall1.book_seats(show_id, seat_list)
                
            else:
                print("Invalid Option")

        except ValueError:
            print("Invalid input. Please enter a number.")

fn()
