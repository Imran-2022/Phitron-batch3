from django.shortcuts import render
import datetime
def home(request):
    context = {
        'author': 'rahim',
        'age': 11,
        'lst':['python','is','best'],
        'birthday':datetime.datetime.now(),
        'courses':[
            {'id':1,
             'name':'python',
             'fee':5000
             },
            {'id':2,
             'name':'django',
             'fee':1253
             },
            {'id':3,
             'name':'C',
             'fee':50004
             },
            {'id':4,
             'name':'Java',
             'fee':125334
             }
        ]
    }

    return render(request, 'home.html', context)
