from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def home(request):
    # return HttpResponse("this is your home !")
    return render(request,'first_app/home.html')
    # return render('')
    