class Star_Cinema:
    def __init__(self):
        self.hall_list = []

    def entry_hall(self, hall_):
        self.hall_list.append(hall_)


class Hall:
    def __init__(self, rows, cols, hall_no) -> None:
        self.seats = {}
        self.show_list = []
        self.rows = rows
        self.cols = cols
        self.hall_no = hall_no
        self.default_free()
        Star_Cinema().entry_hall(self)

    def default_free(self):
        row_list = [0] * self.cols
        seats_ = [row_list.copy() for _ in range(self.rows)]
        self.seats[self.hall_no] = seats_

    def entry_show(self, id, movie_name, time):
        show_info = (id, movie_name, time)
        self.show_list.append(show_info)
        self.seats[id] = [row_list.copy() for row_list in self.seats[self.hall_no]]

    def display_seats(self):
        print("Seats:")
        for row in self.seats[self.hall_no]:
            print(row)


hall = Hall(3, 4, 12)
hall.entry_show(1, "Movie 1", time="2:00 PM")
hall.display_seats()
