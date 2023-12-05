class Test:
    def __init__(self):
        print("hello I am test constructor")
    def greet(self,name):
        print("hy",name)
class child(Test):
    def __init__(self):
        pass


obj=child()
obj.greet("hari")
