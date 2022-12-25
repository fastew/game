package com.example.bts

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.ImageView
import android.widget.Toast

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {

        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val image1 = findViewById<ImageView>(R.id.btsImage1)
        image1.setOnClickListener {

            Toast.makeText(this,"1번 클릭 완료",Toast.LENGTH_LONG).show()

            var intent = Intent(this,Bts1Activity::class.java)
            startActivity(intent)
        }

        val image2 = findViewById<ImageView>(R.id.btsImage2)
        val image3 = findViewById<ImageView>(R.id.btsImage3)
        val image4 = findViewById<ImageView>(R.id.btsImage4)
        val image5 = findViewById<ImageView>(R.id.btsImage5)
        val image6 = findViewById<ImageView>(R.id.btsImage6)
        val image7 = findViewById<ImageView>(R.id.btsImage7)

        image2.setOnClickListener {
            var intent = Intent(this,Bts2Activity::class.java)
            startActivity(intent)
        }
        image3.setOnClickListener {
            var intent = Intent(this,Bts3Activity::class.java)
            startActivity(intent)
        }
        image4.setOnClickListener {
            var intent = Intent(this,Bts4Activity::class.java)
            startActivity(intent)
        }
        image5.setOnClickListener {
            var intent = Intent(this,Bts5Activity::class.java)
            startActivity(intent)
        }
        image6.setOnClickListener {
            var intent = Intent(this,Bts6Activity::class.java)
            startActivity(intent)
        }
        image7.setOnClickListener {
            var intent = Intent(this,Bts6Activity::class.java)
            startActivity(intent)
        }
    }
}