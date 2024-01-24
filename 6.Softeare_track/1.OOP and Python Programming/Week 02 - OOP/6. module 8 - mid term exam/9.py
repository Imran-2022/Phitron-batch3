class Star_Cinema:
    _hall_list = []

    def entry_hall(self, hall_):
        Star_Cinema._hall_list.append(hall_)


class Hall:
    def __init__(self, rows, cols, hall_no) -> None:
        self._seats = {}
        self._show_list = []
        self._rows = rows
        self._cols = cols
        self._hall_no = hall_no
        self._default_free()
        self._entry_hall(self)

    def _entry_hall(self, hall_):
        Star_Cinema().entry_hall(hall_)

    def _default_free(self):
        row_list = [0] * self._cols
        seats_ = [row_list.copy() for _ in range(self._rows)]
        self._seats[self._hall_no] = seats_

    def entry_show(self, show_id, movie_name, time):
        show_info = (show_id, movie_name, time)
        self._show_list.append(show_info)
        self._seats[show_id] = [[0] * self._cols for _ in range(self._rows)]

    # book a seats
    def book_seats(self, show_id, seat_list):
        if show_id not in self._seats:
            raise ValueError(f"Invalid show ID {show_id}.")

        for seat in seat_list:
            row, col = seat

            if not (0 <= row < self._rows and 0 <= col < self._cols):
                raise ValueError(f"Invalid seat: Row {row}, Col {col}.")

            if self._seats[show_id][row][col] == 0:
                self._seats[show_id][row][col] = 1
                print(f"Seat booked: Row {row}, Col {col}")
            else:
                raise ValueError(f"Seat at Row {row}, Col {col} is already booked.")
            
        print('\n')

    # show show lists
    def view_show_list(self):
        print("Show List:")
        print('\n')
        for show in self._show_list:
            print(f"Show ID: {show[0]}, Movie: {show[1]}, Time: {show[2]}")
    
    # show available seats
    def view_available_seats(self, show_id):
        if show_id not in self._seats:
            raise ValueError(f"Invalid show ID {show_id}.")

        print(f"Available Seats for Show ID {show_id}:")
        for row in self._seats[show_id]:
            for seat in row:
                print("0" if seat == 0 else "1", end=" ")
            print(' ')


# replica System for star_cinema by inheriting start_cinama class !
class ReplicaSystem(Star_Cinema):

    # view all shows available
    def view_all_shows(self):
        for i in Star_Cinema._hall_list:
            i.view_show_list()

    # view all available seats for a show
    def view_available_seats_in_show(self, show_id):
        for i in Star_Cinema._hall_list:
            i.view_available_seats(show_id)

    # book tickests for available seats.
    def book_tickets(self, show_id, seat_list):
        show_exists = any(show_id in hall._seats for hall in Star_Cinema._hall_list)
        if not show_exists:
            raise ValueError(f"Invalid show ID {show_id}.")

        for i in Star_Cinema._hall_list:
            try:
                i.book_seats(show_id, seat_list)
            except Exception as e:
                print(f"Error: {e}")


#input vs output

# create hall                
hall1 = Hall(3, 4, 1234)

# add show
hall1.entry_show(1, "Movie 1", time="2:00 PM")
hall1.entry_show(2, "Movie 2", time="5:00 PM")
hall1.entry_show(3, "Movie 2", time="8:00 PM")

# replica system
replica_system = ReplicaSystem()

# view all shows available
replica_system.view_all_shows()

print('\n')

try:
    # view available seats for particular show 
    replica_system.view_available_seats_in_show(2)

    # book tickets if available any seats
    replica_system.book_tickets(2, [(0, 2), (1, 2), (2, 1), (2, 3), (0, 0)])

    # view available seats after
    replica_system.view_available_seats_in_show(2)

except Exception as e:
    print(f"Error: {e}")