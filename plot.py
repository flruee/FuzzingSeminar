import matplotlib.pyplot as plt
import pandas as pd


df = pd.read_csv("xxhash_data.csv")

print(df.columns)
plt.hist(df["cur_path"])
plt.show()