#!/usr/bin/python3
""" a python script to open a url """

from urllib.request

if __name__ == "__main__":
    with urllib.request.urlopen("https://alx-intranet.hbtn.io/status") as f:
        body = f.read()
        print('Body response:')
        print(f'    - type: {type(body)}')
        print(f'    - content: {body}')
        print(f'    - utf8 content: {body.decode("utf-8")}')
