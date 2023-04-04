class People():
    def __init__(self, name, sex):
        self.name = name
        self.sex = sex

    def show(self):
        print(f"{self.name} {self.sex}")



peoples = [People(*input().split()) for _ in range(5)]

for i in peoples:
    i.show()

# list = [i for i in input().split()]

# for i in list:
#     print(i)
