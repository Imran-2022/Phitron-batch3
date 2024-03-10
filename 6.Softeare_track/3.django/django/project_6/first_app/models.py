from django.db import models

# Create your models here.



class Student(models.Model):
    name=models.CharField(max_length=20)
    roll= models.IntegerField(primary_key=True)
    address=models.TextField()
    father_name=models.TextField(blank=True)

    def __str__(self):
        return f'name : {self.name} , roll : {self.roll}'
