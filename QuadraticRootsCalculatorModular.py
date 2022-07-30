import math
import cmath
def main():
    while 1 == 1:
        def Input_Prompts():
            print("Enter the constants of a quadratic equation to find its roots.")
            print("Inputs must be numbers.")
            print("Variable 'a' cannot be zero.")
            # Constants Input
            print(" ")
            global a
            global b
            global c
            a = float(input("Enter value of a:"))
            if(a!=0):
                b = float(input("Enter value of b:"))
                c = float(input("Enter value of c:"))
                print("a=",a)
                print("b=",b)
                print("c=",c)
                if(b>0):
                    if(c>0):
                        print(f"{a}*x^2+{b}*x+{c}")
                    else:
                        print(f"{a}*x^2+{b}*x{c}")
                else:
                    if(c>0):
                        print(f"{a}*x^2{b}*x+{c}")
                    else:
                        print(f"{a}*x^2{b}*x{c}")
            else:
                print("Variable 'a' cannot be 0!")
        def Real_Roots(a,b,c): #Real Roots
            # First Root
            step_1 = b * b - 4 * a * c
            step_2 = math.sqrt(step_1)
            step_3 = -b + step_2
            step_4 = 2 * a
            step_5 = step_3 / step_4
            print(" ")
            print("First root is x =", step_5)
            # Second Root
            step_3 = -b - step_2
            step_4 = 2 * a
            step_5 = step_3 / step_4
            print("Second root is x =", step_5)
            print(" ")
        def Complex_Roots(a,b,c): #Complex Roots
            # First Root
            step_1 = b * b - 4 * a * c
            step_2 = cmath.sqrt(step_1)
            step_3 = -b + step_2
            step_4 = 2 * a
            step_5 = step_3 / step_4
            print(" ")
            print("First root is x =", step_5)
            # Second Root
            step_3 = -b - step_2
            step_4 = 2 * a
            step_5 = step_3 / step_4
            print("Second root is x =", step_5)
            print(" ")
        try:
            Input_Prompts()
            if(a!=0):
                try:
                    Real_Roots(a,b,c)
                except:
                    Complex_Roots(a,b,c)
        except:
            print("Input values must be numbers!")
            print(" ")
        input("Enter to restart:")
        print(" ")
main()
