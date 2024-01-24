class Star_Cinema:
    hall_list=[]
    def entry_hall(self,hall_):
        Star_Cinema.hall_list.append(hall_)

    pass

class Hall(Star_Cinema):
    def __init__(self,rows,cols,hall_no) -> None:
        self.seats={}
        self.show_list=[]
        self.rows=rows
        self.cols=cols
        self.hall_no=hall_no
        self.entry_hall(self)

hall=Hall(1,1,12)

