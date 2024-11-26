from practise_module import random_circle, current_time_and_date

# Call the functions
circle_area = random_circle()
print(f"Radius of the circle:, {circle_area[0]:.2f} cm")
print(f"Area of the circle:, {circle_area[1]:.2f} cm²")

current_time = current_time_and_date() 
print("Current time:", current_time[0])
print("Current date:", current_time[1])