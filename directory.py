import os
import json

def get_directory_structure(root_dir):
    directory_structure = []
    for dirpath, dirnames, filenames in os.walk(root_dir):
        # Calculate the depth of the current directory
        depth = dirpath.count(os.sep) - root_dir.count(os.sep)
        # Ignore .git directory
        if '.git' in dirnames:
            dirnames.remove('.git')
        for filename in filenames:
            name, extension = os.path.splitext(filename)
            if extension in ['.cpp', '.py', '.pdf'] and not filename.endswith('.out'):
                file_path = os.path.join(dirpath, filename)
                relative_path = os.path.relpath(file_path, root_dir)
                directory_structure.append({
                    "name": filename,
                    "path": relative_path,
                    "type": "file",
                    "depth": depth
                })
        for dirname in dirnames:
            if dirname != '.git':  # Skip .git directory
                dir_path = os.path.join(dirpath, dirname)
                relative_path = os.path.relpath(dir_path, root_dir)
                directory_structure.append({
                    "name": dirname,
                    "path": relative_path,
                    "type": "directory",
                    "depth": depth
                })
    return directory_structure

if __name__ == "__main__":
    root_directory = "/home/nirav24/Desktop/Academia/CS101"
    directory_structure = get_directory_structure(root_directory)
    with open("directory.json", "w") as json_file:
        json.dump(directory_structure, json_file, indent=4)
