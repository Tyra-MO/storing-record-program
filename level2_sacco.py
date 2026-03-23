# Level 2 - SACCO Member Savings (Python)

# Member details
name = input("Enter member name: ")
member_id = input("Enter member ID: ")

total_savings = 0

# Input contributions for 6 months
for month in range(1, 7):
    contribution = input(f"Enter contribution for month {month}: ")
    # Convert to float (type coercion)
    contribution = float(contribution)
    total_savings += contribution

# Print results
print("\nMember Name:", name)
print("Member ID:", member_id)
print("Total Savings:", total_savings)