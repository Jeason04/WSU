import re


def main():
    try:
        with open('mbox.txt', 'r') as file:
            content = file.read()
            matches = re.findall(r'New Revision : (\d+)', content)

            if matches:
                revisions = [int(match) for match in matches]
                total_lines = len(revisions)
                total_revisions = sum(revisions)
                average = total_revisions / total_lines

                print(f"Total {total_lines} lines are matched")
                print(f"Average : {average:.4f}")
            else:
                print("No matches found in the file.")
    except FileNotFoundError:
        print("mbox.txt 파일을 찾을 수 없습니다.")


if __name__ == '__main__':
    main()
