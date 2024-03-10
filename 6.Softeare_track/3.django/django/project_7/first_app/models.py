from django.db import models

# Create your models here.

class StudentModel(models.Model):
    roll = models.IntegerField(primary_key= True)
    name = models.CharField(max_length= 20)
    address = models.TextField()
    father_name = models.TextField(max_length= 20)
    
    def __str__(self):
        return f"Name : {self.name}"
    
