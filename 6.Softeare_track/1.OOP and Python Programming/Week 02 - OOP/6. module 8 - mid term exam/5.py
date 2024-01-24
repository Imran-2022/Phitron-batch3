class Star_Cinema:
    hall_list = []

    def entry_hall(self, hall_):
        Star_Cinema.hall_list.append(hall_)



class Hall(Star_Cinema):
    def __init__(self, rows, cols, hall_no) -> None:
        self.seats = {}
        self.show_list = []
        self.rows = rows
        self.cols = cols
        self.hall_no = hall_no
        self.default_free()
        self.entry_hall(self)


    def default_free(self):
        row_list = []  
        for i in range(self.cols):
            row_list.append(0)  
        seats_ = []
        for _ in range(self.rows):
            seats_.append(row_list.copy())
        self.seats[self.hall_no] = seats_


    def entry_show(self, show_id, movie_name, time):

        show_info = (show_id, movie_name, time)

        self.show_list.append(show_info)

        self.seats[show_id] = [[0] * self.cols for _ in range(self.rows)]


    def book_seats(self, show_id, seat_list):
        if show_id not in self.seats:

            print("Invalid  ID.")

            return
        


        for seat in seat_list:
            row, col = seat

            if 0 <= row < self.rows and 0 <= col < self.cols:

                if self.seats[show_id][row][col] == 0:
                    self.seats[show_id][row][col] = 1

                    print(f"Seat booked : Row {row}, Col {col}")

                else:

                    print(f"Seat at Row {row}, Col {col} is already booked.")

            else:
                print(f"Invalid seat: Row {row}, Col {col}")
    
    def view_show_list(self):
        print("Show List:")
        print('\n')
        for _ in self.show_list:
            print(f"Show ID: {_[0]}, Movie: {_[1]}, Time: {_[2]}")


    def view_available_seats(self, show_id):
        if show_id not in self.seats:
            print("Invalid show ID.")
            return

        print(f"Available Seats for Show ID {show_id}:")
        for row in self.seats[show_id]:
            for seat in row:
                print("0" if seat == 0 else "1", end=" ")
            print(' ')

hall = Hall(3, 4, 12)

hall.entry_show(1, "Movie 1", time="2:00 PM")

hall.entry_show(12, "Movie 12", time="2:00 PM")

hall.entry_show(13, "Movie 11", time="2:00 PM")

hall.entry_show(14, "Movie 122", time="2:00 PM")

hall.book_seats(12, [(0, 0), (1, 2), (2, 1), (2, 3), (0, 0)])

# hall.book_seats(14, [(0, 0), (1, 2), (2, 1), (2, 3), (0, 0)])

# hall.book_seats(1, [(0, 0), (1, 2), (2, 1), (2, 3), (0, 0)])


# print('\n')

# print("Hall Info:")

# for hall in Star_Cinema.hall_list:

#     print(f"Hall No: {hall.hall_no}, Rows: {hall.rows}, Cols: {hall.cols}")

#     print('\n')

#     print("Seats Info:")

#     for row in hall.seats[hall.hall_no]:print(row)

#     print('\n')

print('\n')
# hall.view_show_list()
hall.view_available_seats(12)
