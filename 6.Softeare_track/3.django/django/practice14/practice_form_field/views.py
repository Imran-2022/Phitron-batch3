from django.shortcuts import render,redirect
from . import forms
# Create your views here.

def practice(request):
    return render(request, '')

def practice(request):
    if request.method=='POST':
        musician_form=forms.MusicianForm(request.POST)
        if musician_form.is_valid():
            musician_form.save()
            return redirect('practice') 
    else: 
        musician_form=forms.MusicianForm()
    return render(request, 'practice.html',{'form':musician_form})
