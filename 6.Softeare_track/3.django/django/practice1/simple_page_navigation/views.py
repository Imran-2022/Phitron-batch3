from django.shortcuts import render
import datetime

def home(request):
    context = {
        'text': 'hello world!',
        'sentence': 'this is a sample sentence.',
        'date_time': datetime.datetime.now(),
        'number': 12345,
        'list': ['apple', 'banana', 'cherry'],
        'dictionary': {'name': 'John', 'age': 30},
        'filesize': 1024 * 1024 * 10,  # 10 MB
        'html_text': '<h1>Hello, World!</h1>'
    }
    return render(request, 'home.html', context)
