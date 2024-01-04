class Student:
    def __init__(self, name, id, cls):
        self.name = name
        self.id = id
        self.cls = cls

    def __repr__(self) -> str:
        return f'student with name {self.name}, class: {self.cls}, id: {self.id}'


class Teacher:
    def __init__(self, name, subject, id):
        self.name = name
        self.subject = subject
        self.id = id

    def __repr__(self) -> str:
        return f'teacher: {self.name}, subject: {self.subject}'


class School:
    def __init__(self, name) -> None:
        self.name = name
        self.teachers = []
        self.students = []

    def add_teacher(self, name, subject):
        id = len(self.teachers) + 101
        teacher = Teacher(name, subject, id)
        self.teachers.append(teacher)

    def enroll(self, name, fee):
        if fee < 6500:
            return 'not enough fee'
        else:
            id = len(self.students) + 1
            student = Student(name, id, 'c')
            self.students.append(student)
            return f'{name} is enrolled with id: {id}, extra money: {fee - 6500}'

    def __repr__(self) -> str:
        result = f'Welcome to {self.name}\n------------Our Teachers---\n'
        result += '\n'.join(str(teacher) for teacher in self.teachers)
        result += '\nOur Students\n'
        result += '\n'.join(str(std) for std in self.students)
        return result


phitron = School('Phitron')
phitron.enroll('alia', 5200)
phitron.enroll('rani', 8000)
phitron.enroll('aiswaria', 7000)
phitron.enroll('vaijan', 9000)

phitron.add_teacher('tom cruise', 'DS')
phitron.add_teacher('tom asd', 'DS')
phitron.add_teacher('tom sdg', 'DS')

print(phitron)
