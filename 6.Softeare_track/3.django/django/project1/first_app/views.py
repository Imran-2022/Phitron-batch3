from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def courses(request):
    return HttpResponse("this is course page")
def about(request):
    return HttpResponse("this is about page")
def home(request):
    return HttpResponse("this is home page of first app")
