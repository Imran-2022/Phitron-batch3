class Hall:
    def __init__(self, hall_name) -> None:
        self.hall_name = hall_name

class StarCinema:
    def __init__(self):
        self.hall_list = []

    def entry_hall(self, hall_obj):
        self.hall_list.append(hall_obj)

start_cin = StarCinema()
start_cin.entry_hall(Hall("1"))
start_cin.entry_hall(Hall("2"))
start_cin.entry_hall(Hall("3"))
start_cin.entry_hall(Hall("4"))
start_cin.entry_hall(Hall("5"))
