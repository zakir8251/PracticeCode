import sys, os

print("No of arg", len(sys.argv))
print("Script Name", sys.argv[0])

for filename in os.listdir(os.path.dirname(os.path.abspath(__file__))):
	after = filename
	after = after.replace(" ", "_")
	after = after.replace("-", "_")
	after = after.replace("__", "_")
	print(f"{filename} -->{after}")
	#base_file, ext = os.path.splitext(filename)
	os.rename(filename, after)