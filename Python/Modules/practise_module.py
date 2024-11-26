# 1. Create a function which calculates the area of a randomly sized circle (Hint: the radius will be a random number).
# 2. Create a function which prints the current time and date separately

# 1 
def random_circle():
    import random
    radius = random.uniform(1, 10)  # Generate a random radius between 1 and 10
    area = 3.14 * radius ** 2
    return radius, area

# 2
def current_time_and_date():
    import datetime
    current_time = datetime.datetime.now().time()
    current_date = datetime.datetime.now().date()
    return current_time, current_date
