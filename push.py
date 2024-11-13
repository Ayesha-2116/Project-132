import os
import subprocess


branch = "Video"
comment = "Initial Commit"
ignored = []


def get_directory_size(directory):
    total_size = 0
    for dirpath, dirnames, filenames in os.walk(directory):
        for filename in filenames:
            filepath = os.path.join(dirpath, filename)
            total_size += os.path.getsize(filepath)
    return total_size

def run_command(command):
    try:
        print(f"Running {command}")
        result = subprocess.run(command, shell=True, text=True, capture_output=True)
        
        print("Output:")
        print(result.stdout)
        if "nothing" in result.stdout and "commit" in result.stdout:
            return True

        if result.stderr:
            print(f"Error: {result.stderr}")

    except Exception as e:
        print(f"An error occurred: {e}")


def walker(current_directory=None):
    
    if not current_directory:
        current_directory = os.getcwd()
    items = os.listdir(current_directory)

    folders = [item for item in items if os.path.isdir(os.path.join(current_directory, item))]
    files = [item for item in items if not os.path.isdir(os.path.join(current_directory, item))]

    for folder in folders:
        if get_directory_size(folder)/(1024*1024) > 100:
            os.chdir(f"{current_directory}\{folder}")
            walker(f'{current_directory}\{folder}')
            os.chdir(f"{current_directory}")
        else:
            run_command(f'git add {folder}')
            if run_command(f'git commit -m "Initial Commit"'):
                continue
            run_command(f'git push origin {branch}')

    for fil in files:
        filepath = os.path.join(current_directory, fil)
        print(os.path.getsize(filepath)/(1024*1024))
        if os.path.getsize(filepath)/(1024*1024) > 100:
            ignored.append(filepath)
            continue
        run_command(f'git add {fil}')
        if run_command(f'git commit -m "{comment}"'):
            continue
        run_command(f'git push origin {branch}')

walker()
print(ignored)