from collections import Counter
from math import sqrt

def calculate_statistics(data):

    if not data:
        raise ValueError("Data list is empty")

    n = len(data)
    
    # Mean
    mean = sum(data) / n
    
    # Median
    sorted_data = sorted(data)
    middle = n // 2
    if n % 2 == 0:
        median = (sorted_data[middle - 1] + sorted_data[middle]) / 2
    else:
        median = sorted_data[middle]
    
    # Mode
    data_count = Counter(data)
    max_count = max(data_count.values())
    mode = [k for k, v in data_count.items() if v == max_count]
    mode_count = max_count
    
    # Standard Deviation and Variance
    variance = sum((x - mean) ** 2 for x in data) / n
    std_dev = sqrt(variance)
    
    return {
        "Mean": mean,
        "Median": median,
        "Mode": mode,
        "Mode Count": mode_count,
        "Standard Deviation": std_dev,
        "Variance": variance
    }

data = [10, 20, 20, 30, 40, 50, 60, 70, 80, 90]

stats_result = calculate_statistics(data)

print("Central Tendency and Measures of Dispersion:")
for stat, value in stats_result.items():
    print(f"{stat}: {value}")
