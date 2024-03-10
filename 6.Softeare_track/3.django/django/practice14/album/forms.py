from   django import forms
from . models import Album

class AlbumForm(forms.ModelForm):
    class Meta:
        model = Album
        fields='__all__'
        widgets = {
            'release_date': forms.DateInput(attrs={'type': 'date'})
        }
        