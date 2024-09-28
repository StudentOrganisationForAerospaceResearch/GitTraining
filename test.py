# Another simple Python script with formatting and linting issues.

def factorial(n):
     if n == 1: return 1  # Improper indentation and return statement on the same line.
     else:
        return n*factorial(n-1)  # Missing spaces around operators.

def main():
    num =  5  # Extra spaces around the assignment.
    print("Factorial of", num, "is",factorial(num))  # Missing space before the function call.

main()