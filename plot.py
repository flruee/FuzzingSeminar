import matplotlib.pyplot as plt
import pandas as pd


df = pd.read_csv("xxhash_data.csv")

print(df.columns)
plt.plot(df["unix_time"],df["paths_total"])
plt.show()