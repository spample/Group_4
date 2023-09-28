import os

def rename_images(folder_path):
    image_formats = ['.jpg', '.jpeg', '.png', '.gif', '.bmp']  # Add more formats if needed
    image_files = [f for f in os.listdir(folder_path) if os.path.isfile(os.path.join(folder_path, f)) and f.lower().endswith(tuple(image_formats))]

    if not image_files:
        print("No image files found in the folder.")
        return

    image_files.sort()

    for index, image_file in enumerate(image_files, start=1):
        _, ext = os.path.splitext(image_file)
        new_name = f"Luis_{index:04d}{ext}"
        old_path = os.path.join(folder_path, image_file)
        new_path = os.path.join(folder_path, new_name)
        
        os.rename(old_path, new_path)
        print(f"Renamed: {image_file} -> {new_name}")

if __name__ == "__main__":
    folder_path = "C:\\Users\\luisa\\Documents\\UTSA Stuff\\Epics\\50 images"
    rename_images(folder_path)
