from django.shortcuts import render,redirect
from . import forms
from album.models import Album
# Create your views here.

def add_album(request):
    if request.method=='POST':
        album_form=forms.AlbumForm(request.POST)
        if album_form.is_valid():
            album_form.save()
            return redirect('homepage') 
    else: 
        album_form=forms.AlbumForm()
    return render(request, 'album.html',{'form':album_form})

def delete_album(request,id):
    post = Album.objects.get(pk=id)
    post.delete()
    return redirect('homepage') 


def edit_album(request,id):
    post = Album.objects.get(pk=id)
    post_form=forms.AlbumForm(instance=post) 

    if request.method=='POST': 
        post_form=forms.AlbumForm(request.POST,instance=post) 
        if post_form.is_valid(): 
            post_form.save()
            return redirect('homepage') 
    return render(request, 'album.html',{'form':post_form})