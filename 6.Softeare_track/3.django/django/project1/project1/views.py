from django.http import HttpResponse

def home(respose):
    return HttpResponse("this is form home page")

def contact(request):
    return HttpResponse("hello from django backend ! ")