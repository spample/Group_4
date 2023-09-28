import os
import shutil
from itertools import cycle

# Replace with your actual source folder path
source_folder_path = "C:\\Users\\luisa\\Documents\\UTSA Stuff\\Epics\\50 images"

# List of destination folders
destination_folders = ["folder1", "folder2", "folder3", "folder4", "folder5"]

# Create destination folders if they don't exist
for folder in destination_folders:
    folder_path = os.path.join(source_folder_path, folder)
    os.makedirs(folder_path, exist_ok=True)

# Get a cyclic iterator for the destination folders
destination_iterator = cycle(destination_folders)

# Iterate over the images in the source folder
for filename in os.listdir(source_folder_path):
    if filename.lower().endswith((".png", ".jpg", ".jpeg", ".gif", ".bmp")):
        source_file_path = os.path.join(source_folder_path, filename)
        destination_folder = next(destination_iterator)
        destination_file_path = os.path.join(source_folder_path, destination_folder, filename)
        shutil.move(source_file_path, destination_file_path)
        print(f"Moved {filename} to {destination_folder}")
